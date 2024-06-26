/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoutsou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:26:38 by akoutsou          #+#    #+#             */
/*   Updated: 2024/03/20 17:26:39 by akoutsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Client.hpp"

Client::Client(int fd) : socket_fd(fd), isRegistered(false), hasReceivedNick(false), hasReceivedUser(false), isjoin(0) {
}

Client::~Client() {
}


void Client::setNickname(const std::string& nick) {
    nickname = nick;
}


const std::string& Client::getNickname() const {
    return nickname;
}

bool Client::isInChannel(std::string channel_name) {
    
    for (std::vector<std::string>::iterator it = channels.begin(); it != channels.end(); ++it) {
        if (*it == channel_name) {
            return true; 
        }
    }
    return false;
}

void Client::removeChannel(std::string channel_name) {
    for (std::vector<std::string>::iterator it = channels.begin(); it != channels.end(); ++it) {
        if (*it == channel_name) {
            it = channels.erase(it);
            --it;
        }
    }
}

void Client::setIsJoin(){
    isjoin++;
}

int Client::getIsJoin() {
    return isjoin;
}

void Client::mergeBuffer(char *client_buffer)
{
    buffer = buffer + client_buffer;
}
void Client::clearBuffer()
{
    buffer.clear();
}
std::string Client::getBuffer()
{
    return buffer;
}

std::string Client::getUsername()
{
    return username;
}

void Client::setHost(const std::string& host) {
    this->host = host;
}

std::string Client::getHost() const {
    return host;
}
