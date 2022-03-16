/*
 * legal comment
 */

/*
 * /* */ illegal comment
 */

// compile result
// warning: '/*' within block comment [-Wcomment]
// ...

int main() {
    return 0;
}