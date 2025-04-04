#include "impl/manifest/objects/module/imodulefactory.hpp"

#include <gmock/gmock.h>

using namespace libpkgmanifest::internal::manifest;

namespace {

class ModuleFactoryMock : public IModuleFactory {
public:
    MOCK_METHOD(std::unique_ptr<IModule>, create, (), (const, override));
};

}
