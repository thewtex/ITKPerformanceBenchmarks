/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#include "itkHighPriorityRealTimeProbe.h"
#include <numeric>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "itkMultiThreader.h"

namespace itk
{
/** Constructor */
HighPriorityRealTimeProbe
::HighPriorityRealTimeProbe():ResourceExpandedProbe< TimeStampType, TimeStampType >("Time", "s")
{
  this->m_HighPriorityRealTimeClock   = HighPriorityRealTimeClock::New();
}

/** Destructor */
HighPriorityRealTimeProbe
::~HighPriorityRealTimeProbe()
{}

/** Get the current time. */
HighPriorityRealTimeProbe::TimeStampType
HighPriorityRealTimeProbe
::GetInstantValue() const
{
  return m_HighPriorityRealTimeClock->GetTimeInSeconds();
}

} // end namespace itk
