////////////////////////////////////////////////////////////////////////////////////////////////////////
// Auto-generated code. Do not edit.

#ifndef NET_CORDA_CORE_CONTRACTS_COMMAND_H
#define NET_CORDA_CORE_CONTRACTS_COMMAND_H

#include "corda.h"

// Pre-declarations to speed up processing and avoid circular header dependencies.
namespace java {
namespace security {
class PublicKey;
}
}
namespace net {
namespace corda {
namespace core {
namespace contracts {
class CommandData;
template <class T> class Command;
}
}
}
}
namespace java {
namespace lang {
class Object;
}
}

// End of pre-declarations.

namespace net {
namespace corda {
namespace core {
namespace contracts {

template <class T> class Command {
public:
    std::list<net::corda::ptr<java::security::PublicKey>> signers;
    net::corda::ptr<T> value;

    explicit Command(proton::codec::decoder &decoder) {
        net::corda::CompositeTypeGuard guard(decoder, "net.corda.core.contracts.Command<?>", descriptor(), 2);
        net::corda::Parser::read_to(decoder, signers);
        net::corda::Parser::read_to(decoder, value);
    }

    const std::string descriptor();
};

}
}
}
}

// Template specializations of the descriptor() method.
template<> const std::string net::corda::core::contracts::Command<void *>::descriptor() { return "net.corda:+8JPOg3TmkKZMh1QVVm3QA=="; }
// End specializations.

#endif