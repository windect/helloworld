#include <eosio/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract{
    public:
    using contract::contract;

    ACTION hi(name user){
        require_auth(user);
        print("hello world", user);
    }

    
};