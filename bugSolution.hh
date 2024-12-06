function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) * 2;
}

function baz(x: int): int {
  return bar(x) - 1;
}

function main(): void {
  var x: int = 10;
  var y: int = baz(x);
  print(y);
}

This corrected code explicitly defines the return type of the function `foo` as `int`, resolving the implicit type casting issue.