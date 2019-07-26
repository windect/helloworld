#include <eosio/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract{
    public:
    using contract::contract;

    ACTION helloworld(name user){
        rwquir_auth(user);
        print("hello world", user);
    }

    
}