/*
 *    Copyright (c) 2012-2015
 *      SMASH Team
 *
 *    GNU General Public License (GPLv3 or later)
 */
#ifndef SRC_INCLUDE_BOXMODUS_H_
#define SRC_INCLUDE_BOXMODUS_H_

#include <map>

#include "forwarddeclarations.h"
#include "modusdefault.h"

namespace Smash {

/**
 * \ingroup modus
 * BoxModus: Provides a modus for infinite matter calculations
 *
 * Matter is confined in a cubical box. Depending on the initial
 * condition, particles are either reflected on the boundaries
 * (not implemented now) or inserted on opposite positions.
 *
 * To use this modus, chose
 * \code
 * General:
 *      MODUS: Box
 * \endcode
 * in the configuration file.
 *
 * Options for BoxModus go in the "Modi"→"Box" section of the
 * configuration:
 *
 * \code
 * Modi:
 *      Box:
 *              # definitions here
 * \endcode
 *
 * The following configuration options are understood:
 * \ref input_modi_box_
 */
class BoxModus : public ModusDefault {
 public:
  /// Gathers all configuration variables for the Box.
  explicit BoxModus(Configuration modus_config,
           const ExperimentParameters &parameters);

  /** creates initial conditions from the particles.
   */
  float initial_conditions(Particles *particles,
                          const ExperimentParameters &parameters);

  /** Enforces that all particles are inside the box
   *
   * \param[in] particles particles to check their position and possibly
   *            move it
   * \param[in] output_list output objects
   * \param[out] number of particles that were moved
   *
   * In BoxModus if particle crosses the wall of the box, it is
   * inserted from the opposite side. Wall crossings are written to
   * collision output: this is where OutputsList is used.
   */
  int impose_boundary_conditions(Particles *particles,
                         const OutputsList &output_list = {});

  Grid<GridOptions::PeriodicBoundaries> create_grid(
      ParticleList &&all_particles, const int testparticles) const {
    return {{{0, 0, 0}, {length_, length_, length_}},
              std::move(all_particles), testparticles};
  }

 private:
  /** initial condition
   *
   * If initial_condition_ == 2, all particles have the same momentum
   * \f$p = 3 \cdot T\f$ with T the temperature.
   *
   * Else, a thermalized ensemble is generated (the momenta are sampled
   * from a Maxwell-Boltzmann distribution).
   */
  const int initial_condition_;
  /// length of the cube's edge in fm/c
  const float length_;
  /// Temperature of the Box in GeV
  const float temperature_;
  /// initial time of the box
  const float start_time_ = 0.0f;
  /// particle multiplicities at initialization
  const std::map<PdgCode, int> init_multipl_;

  /**\ingroup logging
   * Writes the initial state for the Box to the output stream.
   */
  friend std::ostream &operator<<(std::ostream &, const BoxModus &);
};

}  // namespace Smash

#endif  // SRC_INCLUDE_BOXMODUS_H_
