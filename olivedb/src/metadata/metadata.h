
#pragma once
#include <string>
#include <vector>
#include <cstdint>
#include <memory>
#include <map>
#include <functional>

namespace olive
{
  class Metadata
  {
    friend class MetadataModifier;
    public:
      uint64_t id=0;
      uint64_t index = 0;
      bool valid_index = false;
  };
} // namespace olive
