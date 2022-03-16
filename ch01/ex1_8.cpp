#include <iostream>

int main() {
    // std::cout << "/*"; 
    // legal: print >> /*

    // std::cout << "*/"; 
    // legal: print >> */

    // std::cout << /* "*/" */;
    // illegal
    // add a quote at the end of this line
    // std::cout << /* "*/" */";
    // legal: print >> _*/

    // std::cout << /* "*/" /* "/*" */;
    // legal: print >> _/*_
    return 0;
}