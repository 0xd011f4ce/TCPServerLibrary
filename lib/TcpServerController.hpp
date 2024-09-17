#ifndef __TCP_SERVER_CONTROLLER_HPP__
#define __TCP_SERVER_CONTROLLER_HPP__

#include <cstdint>
#include <string>

class TcpNewConnectionAcceptor;
class TcpClientDbManager;
class TcpClientServiceManager;

class TcpServerController
{
private:
  TcpNewConnectionAcceptor *tcp_new_conn_acc;
  TcpClientDbManager *tcp_client_db_mgr;
  TcpClientServiceManager *tcp_client_srv_mgr;

public:
  uint32_t ip_addr;
  uint16_t port_no;
  std::string name;
  TcpServerController (std::string ip_addr, uint16_t port_no,
                       std::string name);
  ~TcpServerController ();

  void Start ();
  void Stop ();
};

#endif // __TCP_SERVER_CONTROLLER_HPP__