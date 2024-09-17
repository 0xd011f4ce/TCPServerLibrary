#ifndef __TCP_CLIENT_DB_MANAGER_HPP__
#define __TCP_CLIENT_DB_MANAGER_HPP__

#include <list>

class TcpClient;
class TcpServerController;

class TcpClientDbManager
{
private:
  std::list<TcpClient *> tcp_client_db;

public:
  TcpServerController *tcp_ctrlr;

  TcpClientDbManager (TcpServerController *tcp_ctrlr);
  ~TcpClientDbManager ();
};

#endif // __TCP_CLIENT_DB_MANAGER_HPP__