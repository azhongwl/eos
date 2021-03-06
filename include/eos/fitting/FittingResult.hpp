/*
 * eos - A 3D Morphable Model fitting library written in modern C++11/14.
 *
 * File: include/eos/fitting/FittingResult.hpp
 *
 * Copyright 2016 Patrik Huber
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#ifndef FITTINGRESULT_HPP_
#define FITTINGRESULT_HPP_

#include "eos/fitting/RenderingParameters.hpp"

#include <vector>

namespace eos {
namespace fitting {

/**
 * @brief A struct holding the result from a fitting.
 *
 * Holds the parameters to store and reproduce a shape fitting result:
 * Rendering parameters, PCA shape and expression coefficients.
 */
struct FittingResult
{
    RenderingParameters rendering_parameters;
    std::vector<float> pca_shape_coefficients;
    std::vector<float> expression_coefficients;
};

} /* namespace fitting */
} /* namespace eos */

#endif /* FITTINGRESULT_HPP_ */
