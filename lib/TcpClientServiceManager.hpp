#ifndef __TCP_CLIENT_SERVICE_MANAGER_HPP__
#define __TCP_CLIENT_SERVICE_MANAGER_HPP__

class TcpServerController;

class TcpClientServiceManager
{
private:
public:
  TcpServerController *tcp_ctrlr;
  TcpClientServiceManager (TcpServerController *tcp_ctrlr);
  ~TcpClientServiceManager ();
};

#endif // __TCP_CLIENT_SERVICE_MANAGER_HPP__