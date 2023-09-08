#include "./defer.hh"
#include <cstdio>

using std::puts;

int main() {
  // make defered lambda
  defered([] {
    puts("last");
  })

  // defer expression
  defer (
    puts("third")
  );

  puts("first");
  puts("second");
}
