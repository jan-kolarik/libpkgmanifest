#include "version.hpp"
#include "versionfactory.hpp"

namespace libpkgmanifest::internal::common {

std::unique_ptr<IVersion> VersionFactory::create() const {
    return std::make_unique<Version>();
}   

}