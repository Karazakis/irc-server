/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoutsou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:26:42 by akoutsou          #+#    #+#             */
/*   Updated: 2024/03/20 17:26:43 by akoutsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_HPP
#define CLIENT_HPP

#include<vector>
#include<algorithm>
#include <string>

class Client 
{
public:
    Client(int fd);
    ~Client();
    void setNickname(const std::string& nick);
    const std::string& getNickname() const;
    bool isInChannel(std::string channel_name);
    void removeChannel(std::string channel_name);
    void setIsJoin();
    int getIsJoin();
    void mergeBuffer(char *client_buffer);
    void clearBuffer();
    std::string getBuffer();
    std::string getUsername();
    void setHost(const std::string& host);
    std::string getHost() const;
    
    int socket_fd;
    std::string nickname;
    std::string username;
    std::string realname;
    std::string host;
    std::vector<std::string> channels;
    std::string buffer;
    bool auth;
    bool isRegistered;
    bool hasReceivedNick;
    bool hasReceivedUser;
    int isjoin;

private:
    
};

#endif
