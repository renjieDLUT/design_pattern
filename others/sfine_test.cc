/*
 * @Author: renjie renjie_dlut2016@163.com
 * @Date: 2024-03-11 14:44:37
 * @LastEditors: renjie renjie_dlut2016@163.com
 * @LastEditTime: 2024-03-11 14:54:08
 * @FilePath: /design_pattern_test/others/sfine_test.cc
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
#include <type_traits>

template <typename T,
          typename std::enable_if<std::is_same<T, int>::value ||
                                  std::is_same<T, std::string>::value>::type * =
              nullptr>
void Foo(T input) {
  std::cout << input << std::endl;
}

int main() {
  Foo(12);
  Foo(std::string("renjie"));
}