#pragma once

namespace unused {

class Unused
{
public:
    template <typename T>
    Unused(T&& v)
    {
        static_cast<void>(v);
    }

    template <typename T, typename... R>
    Unused(T&& v, R&&... args)
        : Unused(args...)
    {
        static_cast<void>(v);
    }
};

}  // namespace unused