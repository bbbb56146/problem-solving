#include <iostream>
#include <forward_list>
#include <vector>

int main(){
    std::vector<std::string> vec = {
        "Twice", "StayC", "Blackpink", "Girlfriend", "Oh my girl", "(G)IDLE"
    };

    auto it = vec.begin();
    std::cout << "가장 최근 우승자: " << *it << std::endl;

    it += 3;
    std::cout << "3년전 우승자: " << *it << std::endl;

    it -= 2;
    std::cout << "그후 2년 후 우승자: " << *it << std::endl;


    std::forward_list<std::string> fwd(vec.begin(), vec.end());
    auto it1 = fwd.begin();
    std::cout << "가장 최근 우승자: " << *it1 << std::endl;

    advance(it1,3);
    std::cout << "3년전 우승자: " << *it1 << std::endl;

    //advance(it1,-2); //forward list는 연결 리스트 -> 역방향 x 
    //std::cout << "그후 2년 후 우승자: " << *it1 << std::endl;
    return 0;
}