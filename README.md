# Prevents compiler warnings about unused arguments


[![Hits-of-Code](https://hitsofcode.com/github/kharlamenkodev/unused)](https://hitsofcode.com/view/github/kharlamenkodev/unused)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/kharlamenkodev/unused/blob/master/LICENSE)


If the advanced warnings compiler flag is enabled in your project, sometimes a warning about unused parameters may appear. **Unused** helps to avoid this.

### Build and install

```bash
mkdir build && cd build
cmake ..
cmake --install .
```

### How to use:

In your CMakeLists.txt, write:

```
find_package(unused)
```
Then in your source files you can use 'unused' lib headers:

```cpp
#include <unused.hpp>

void foo(int a, std::string b, double c, std::ostream& d, std::exception* e)
{
    unused::Unused unused_args(a, b, c, d, e);
}
```