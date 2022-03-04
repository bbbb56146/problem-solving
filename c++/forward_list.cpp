#include <iostream>
#include <forward_list>
int main(){
    std::forward_list<int> fwd_list = {1,2,3,4,5};
    
    fwd_list.pop_front();

    auto it = fwd_list.begin();

    fwd_list.erase_after(it);
    
    fwd_list.erase_after(it, fwd_list.end());

    // reverse, sort, unique
    std::forward_list<int> list1 = {2,53,1,0,4,10};
    list1.reverse();
    for(const auto &i : list1){
        std::cout << i <<" ";
    }
    std::cout<<std::endl;

    list1 = {0,1,0,1,-1,10,5,5,10,0};
    list1.unique();
    std::cout<<"list1.unique: ";
    for(const auto &i : list1){
        std::cout << i <<" ";
    }
    std::cout<<std::endl;

    list1 = {0,1,0,1,-1,10,5,5,10,0};
    list1.sort();
    std::cout<<"list1.sort: ";
    for(const auto &i : list1){
        std::cout << i <<" ";
    }
    std::cout<<std::endl;

    list1.unique();
    std::cout<<"list1.unique: ";
    for(const auto &i : list1){
        std::cout << i <<" ";
    }
    std::cout<<std::endl;


    list1.unique([](int a, int b) { return (b-a) < 2; });
    std::cout<<"list1.unique(bollean): ";
    for(const auto &i : list1){
        std::cout << i <<" ";
    }
    std::cout<<std::endl;
    return 0;
}
