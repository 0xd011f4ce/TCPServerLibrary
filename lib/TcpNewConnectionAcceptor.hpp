#ifndef __TCP_NEW_CONNECTION_ACCEPTOR_HPP__
#define __TCP_NEW_CONNECTION_ACCEPTOR_HPP__

class TcpServerController;

class TcpNewConnectionAcceptor
{
public:
  TcpServerController *tcp_ctrlr;

  TcpNewConnectionAcceptor (TcpServerController *tcp_ctrlr);
  ~TcpNewConnectionAcceptor ();
};

#endif // __TCP_NEW_CONNECTION_ACCEPTOR_HPP__