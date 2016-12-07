/** 
 * @file	IPossibleStateFinder.h
 * @brief	header file for class that enables to choose possible states 
 *          of each token of the sentence using their features
 *
 * .. invisible:
 *     _   _ _____ _     _____ _____
 *
 *    | | | |  ___| |   |  ___/  ___|
 *
 *    | | | | |__ | |   | |__ \ `--.
 *
 *    | | | |  __|| |   |  __| `--. \
 *
 *    \ \_/ / |___| |___| |___/\__/ /
 *
 *     \___/\____/\_____|____/\____/
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *   http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License
 *
 */


#ifndef I_POSSIBLE_STATE_FINDER
#define I_POSSIBLE_STATE_FINDER

#include "Chain.h"
#include "CRF.h"

namespace LinearCRF
{

/** 
 * @class	IPossibleStateFinder
 * @brief	enables to choose possible states 
 *          of each token of the sentence using their features 
 *          (abstract class, you should implement GetPossibleStates)
 */
class IPossibleStateFinder
{
public:
    /**
     * @brief	Constructor
     */
    IPossibleStateFinder() {}

    /**
     * @brief	Destructor
     */
    ~IPossibleStateFinder(void) {}

    /**
     * @brief	Finds possible states in chain
     * @param[out]	chain - chain to process
     */
    virtual void FindPossibleStates(Chain* chain) = 0;

    virtual void ConnectWithModel(const CRF& crf) {}
};

}

#endif // I_POSSIBLE_STATE_FINDER
