#include <Server.hpp>
#include <Shared.hpp>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int Server::getPendingRequest()
{
    return Shared::pendingRequests->out();
}

char *Server::readData(int id)
{
    Shared::waitForStatus(BUFFER_STATUS_REQUESTED, id);
    return Shared::read(id);
}

void Server::putData(char *data, int id)
{
    Shared::write(data, id);
    Shared::updateStatus(BUFFER_STATUS_RESPONDED, id);
}