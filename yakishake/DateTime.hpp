#include <chrono>
#include <string>
#include <ctime>

namespace yakishake
{
  namespace DateTime
  {
    std::string getToday()
    {
      std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
      std::time_t time = std::chrono::system_clock::to_time_t(now);
      return std::ctime(&time);
    }
  } // namespace DateTime
} // namespace yakishake