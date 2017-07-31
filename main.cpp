#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>

namespace logging = boost::log;

int main() {
    logging::core::get()->set_filter(logging::trivial::severity >= logging::trivial::info);

    BOOST_LOG_TRIVIAL(trace) << "trace";

    return 0;
}
