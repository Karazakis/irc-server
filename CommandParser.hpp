/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CommandParser.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoutsou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:26:53 by akoutsou          #+#    #+#             */
/*   Updated: 2024/03/20 17:26:53 by akoutsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_PARSER_HPP
#define COMMAND_PARSER_HPP

#include <string>
#include <vector>

class CommandParser 
{
public:
    static std::vector<std::string> parseCommand(const std::string& input);
};

#endif
