/* Copyright 2024 Multi-Project DevOps
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

#include <cstdlib>
#include <hello_world_library/hello_world_library.hpp>
#include <iostream>

int main(int argc, char* argv[]) {
    // Call the function defined in the hello_world library
    std::cout << hello_world::say_hello() << std::endl;

    return EXIT_SUCCESS;
}
