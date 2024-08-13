#include <iostream>
#include <stack>
using namespace std;

int main() {

  stack<int> integer_stack;

  integer_stack.push(10);
  integer_stack.push(20);
  integer_stack.push(30);

  cout << "The top element is: " << integer_stack.top() << endl;

  integer_stack.pop();

  cout << "The size of the stack is: " << integer_stack.size() << endl;

  
  cout << "The stack is empty: " << (integer_stack.empty() ? "true" : "false") << endl;

  return 0;
}
