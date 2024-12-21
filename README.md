# Prevents compiler warnings about unused arguments


[![Hits-of-Code](https://hitsofcode.com/github/kharlamenkodev/unused)](https://hitsofcode.com/view/github/kharlamenkodev/unused)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/kharlamenkodev/unused/blob/master/LICENSE)

### How to use:

```cpp
#include <unused.hpp>

void foo(int a, std::string b, double c, std::ostream& d, std::exception* e)
{
    unused::Unused unused_args(a, b, c, d, e);
}
```