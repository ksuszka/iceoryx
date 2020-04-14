// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef IOX_POPO_CHUNK_QUEUE_TYPES_HPP_
#define IOX_POPO_CHUNK_QUEUE_TYPES_HPP_


namespace iox
{
namespace popo
{
enum class ChunkQueueError
{
    SEMAPHORE_ALREADY_SET,
    QUEUE_OVERFLOW
};

} // namespace popo
} // namespace iox

#endif
