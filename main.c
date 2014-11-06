#include <restclient-cpp/restclient.h>
#include <iostream>

int main(int argc, char** argv)
{
  RestClient::response r = RestClient::get("http://example.com");
  std::cout << "Got response: " << r.code << std::endl;
  std::cout << r.body << std::endl;
  return 0;
}
