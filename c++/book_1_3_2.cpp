#include <array>
#include <iostream>
#include <type_traits>

template<typename ... Args>
auto build_array(Args&&... args) -> std::array<typename std::common_type <Args...>::type, sizeof...(args)>
{
    using commonType = typename std::common_type<Args...>::type;
    //make array
    return  {std::forward<commonType>((Args&&)args)...};
}

int main(){
    //정상 작동
    auto data = build_array(1,0u,'a',3.2f,false);

    //err
    //auto data = build_array(1,"Packt", 2.0);

    for (auto i: data){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}