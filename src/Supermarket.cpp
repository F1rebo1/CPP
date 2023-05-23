#include <iostream>

using String = std::string;

class Supermarket{
    private:
        int m_CurAisle = 1;
        String m_SupermarketName = "Costco";
    public:
        enum Aisle{
            foodAisle = 1, drinkAisle, cerealAisle, bakeryAisle
        };
    public:
        Supermarket() : m_CurAisle(1), m_SupermarketName("Costco") {}

        // String getMarketName(){
        //     return m_SupermarketName;
        // }

        virtual String PrintBoi(){
            return "PrintBoi Supermarket";
        }

        Aisle getAisleEnum(int aisle){
            if(aisle >= foodAisle){
                std::cout << "You have now entered the food aisle!" << std::endl;
                m_CurAisle = aisle;
                return foodAisle;
            }else if(aisle >= drinkAisle){
                std::cout << "You have now entered the drink aisle!" << std::endl;
                m_CurAisle = aisle;
                return drinkAisle;
            }
            else if(aisle >= cerealAisle){
                std::cout << "You have now entered the cereal aisle!" << std::endl;
                m_CurAisle = aisle;
                return cerealAisle;
            }
            else if(aisle >= bakeryAisle){
                std::cout << "You have now entered the bakery aisle!" << std::endl;
                m_CurAisle = aisle;
                return bakeryAisle;
            }
        }

        void SetCurAisle(Aisle num){
            m_CurAisle = num;
        }

        void SetAisle(Supermarket sm){
            m_CurAisle = sm.m_CurAisle;
        }

        void GetAisle(Supermarket sm){
            std::cout << "We are currently in aisle " << sm.m_CurAisle << std::endl;
        }

        ~Supermarket(){}
};

class Food : public Supermarket{
    private:
        // int m_CurAisle = 1;
        int m_foodId;
    public:
        String m_foodName;
        int m_quantity;
    public:
        Food() : m_foodId(1) {}

        // Food(String item) : m_foodName(item){
        //     Food newFood(item);
        //     newFood.m_quantity = rand() % 100 + 1;
        // }

        Food(String item) : m_foodName(item), m_quantity(1){}

        String PrintBoi() {
            return "PrintBoi Food";
        }

        void GetQtyFood(Food* foodItem){
            std::cout << "Reached GetQtyFood" << std::endl;
            // std::cout << foodItem->m_foodName << std::endl;
            std::cout << "We currently have " << foodItem->m_quantity << " units of " << (*foodItem).m_foodName << " left in stock" << std::endl;
        }

        void GetFoodItem(Food* foodName){
            std::cout << "Reached GetFoodItem" << std::endl;
        }

        void FindFoodItem(Food* foodName){
            std::cout << "Trying to find " << &foodName << std::endl;
        }

        void SetFoodName(String foodName){
            std::cout << "Successfully set food name" << std::endl;
            m_foodName = foodName;
        }

        ~Food(){}
};

int main(){

    Supermarket* sm = new Supermarket();
    std::cout << sm->PrintBoi() << std::endl;

    Food* f = new Food();
    std::cout << f->PrintBoi() << std::endl;

    Supermarket* fp = f;
    std::cout << fp->PrintBoi() << std::endl;

    delete sm;
    delete f;
    return 0;
}