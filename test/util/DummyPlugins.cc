/*
 * Copyright (C) 2017 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include "ignition/common/PluginMacros.hh"
#include "util/DummyPlugins.hh"


namespace test
{
namespace util
{

std::string DummyPlugin::MyNameIs()
{
  return std::string("DummyPlugin");
}

std::string DummyMultiPlugin::MyNameIs()
{
  return std::string("DummyMultiPlugin");
}

double DummyMultiPlugin::MyValueIs()
{
  return 3.14159;
}

}
}

IGN_COMMON_BEGIN_ADDING_PLUGINS
  IGN_COMMON_ADD_PLUGIN(test::util::DummyPlugin, test::util::DummyPluginBase)
  IGN_COMMON_ADD_PLUGIN(test::util::DummyMultiPlugin, test::util::DummyPluginBase)
  IGN_COMMON_ADD_PLUGIN(test::util::DummyMultiPlugin, test::util::DummyOtherBase)
IGN_COMMON_FINISH_ADDING_PLUGINS
