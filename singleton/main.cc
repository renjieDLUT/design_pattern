/*
 * @Author: renjie renjie_dlut2016@163.com
 * @Date: 2024-03-07 17:38:33
 * @LastEditors: renjie renjie_dlut2016@163.com
 * @LastEditTime: 2024-03-08 15:33:35
 * @FilePath: /design_pattern_test/singleton/main.cc
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <iostream>

class Singleton {
public:
  static Singleton *GetInstance() {
    if (!instance) {
      instance = new Singleton;
    }
    return instance;
  }

private:
  Singleton() = default;
  Singleton(const Singleton &other) = delete;
  static Singleton *instance;
};
Singleton *Singleton::instance = nullptr;

int main() {
  Singleton *obj_ptr = Singleton::GetInstance();
  Singleton *obj2_ptr = Singleton::GetInstance();
  std::cout << obj2_ptr << " " << obj_ptr << std::endl;
  std::cout <<std::boolalpha<< bool(0) << std::endl;
}