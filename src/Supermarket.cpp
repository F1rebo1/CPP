#include <iostream>

using String = std::string;

class Supermarket{
    private:
        int m_CurAisle = 1;
        String m_SupermarketName;
    public:
        enum Aisle{
            foodAisle = 1, drinkAisle, cerealAisle, bakeryAisle
        };
    public:
        Supermarket() : m_CurAisle(1), m_SupermarketName("Bostco") {}

        String getMarketName(){
            return m_SupermarketName;
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

        Food(const char* item) : m_foodName(item), m_quantity(1){}

        int GetQtyFood(Food* foodItem){
            std::cout << "Reached GetQtyFood" << std::endl;
            std::cout << foodItem->m_foodName << std::endl;
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

    struct foodVars{
        int val;
        String foodName;
        Food food;
    };

    struct foodPointers{
        Food* food;
    };

    Supermarket aisle = Supermarket();
    foodVars foodVar;
    foodPointers foodPtr;
    foodPtr.food = &foodVar.food;

    std::cout << "Welcome to " << aisle.getMarketName() << ". Which Aisle would you like to enter?" << std::endl;
    std::cout << "1. Food" << std::endl;
    std::cout << "2. Drink" << std::endl;
    std::cout << "3. Cereal" << std::endl;
    std::cout << "4. Bakery" << std::endl;
    std::cout << "" << std::endl;
    std::cin >> foodVar.val;

    aisle.SetCurAisle(aisle.getAisleEnum(foodVar.val));

    std::cout << "What food are you looking for today?" << std::endl;
    std::cin >> foodVar.foodName;
    foodVar.food.GetAisle(foodVar.food);
    std::cout << "Excellent, let us check the stock for " << foodVar.foodName << "!" << std::endl;
    foodVar.food.SetFoodName(foodVar.foodName);
    foodVar.food.GetQtyFood(foodPtr.food);
    // std::cout << "We currently have " << foodVar.food.GetQtyFood(foodPtr.food) << " units left in stock" << std::endl;

    return 0;
}