#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algrorithm>


void pack(std::vector<std::vector<int>> not_packed_items, std::vector<std::vector<int>> current_items, std::vector<std::vector<int>> &best_items,
    int summewert, int summegewicht, int volumen, int itemsize, int ebene){
    ebene++;

    for(int i = 0; i < itemsize; i++){

        if(not_packed_items[i][1] != 0){

            if(summegewicht+not_packed_items[i][1] > volumen){
                current_items[0][0]=summewert;

                //test
                /*
                
                if(current_items.size()==4){
                    if(current_items[1][2]==1 && current_items[2][2]==3 && current_items[3][2]==5){
                        std::cout << "test" << summewert << std::endl;
                    }
                }
                
                */



                if(current_items[0][0] > best_items[0][0]){ 
                    best_items = current_items;
                    return;
                }
            }
            else{
                current_items.push_back(not_packed_items[i]);
                summegewicht += not_packed_items[i][1];
                summewert += not_packed_items[i][0];
                std::vector<int> temp=not_packed_items[i];
                not_packed_items[i] = {0};

                pack(not_packed_items, current_items, best_items, summewert, summegewicht, volumen, itemsize, ebene);

                not_packed_items[i]=temp;
                summegewicht -= not_packed_items[i][1];
                summewert -= not_packed_items[i][0];
                current_items.pop_back();
            }
        }

    }
}

int main(){
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    //std::stringstream ss("5 250   25 20   93 69   57 58   23 35   51 82");
    std::getline(ss, input, ' ');
    while(input.empty()){
        std::getline(ss, input, ' ');
    }
    int itemcount = std::stoi(input);
    int c = itemcount;
    std::getline(ss, input, ' ');
    while(input.empty()){
        std::getline(ss, input, ' ');
    }
    int volumen = std::stoi(input);

    int wert=0;
    int gewicht=0;
    std::vector<std::vector<int>> items;


    while(c--){
        std::getline(ss, input, ' ');
        while(input.empty()){
            std::getline(ss, input, ' ');
        }
        wert = std::stoi(input);
            std::getline(ss, input, ' ');
        while(input.empty()){
            std::getline(ss, input, ' ');
        }
        gewicht = std::stoi(input);
        items.push_back({wert, gewicht, itemcount-c});  
    }
/*
    for(int i=0; i<items.size(); i++){
        std::cout << "wert: " << items[i][0] << "\ngewicht: " << items[i][1] << "\nintemcount: " << items[i][2] << std::endl;
        std::cout << itemcount << std::endl;
    }
*/



    std::vector<std::vector<int>> not_packed_items = items;
    std::vector<std::vector<int>> current_items;
    std::vector<std::vector<int>> best_items;
    current_items.push_back({0});
    best_items.push_back({0});

    int summegewicht = 0;
    int summewert = 0;
    int ebene = 0;

    pack(not_packed_items, current_items, best_items ,summewert, summegewicht, volumen, items.size(), ebene);


    //std::cout<<"\n";


    for(int i=1; i<best_items.size(); i++){
        std::cout << best_items[i][2] << " ";
    }
    std::cout<<std::endl;




}
