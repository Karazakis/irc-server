/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CommandParser.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoutsou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:26:49 by akoutsou          #+#    #+#             */
/*   Updated: 2024/03/20 17:26:50 by akoutsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CommandParser.hpp"
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> CommandParser::parseCommand(const std::string& input)
{
    std::vector<std::string> tokens;
    std::istringstream iss;
    
    // Rimuovi i caratteri di newline e carriage return dall'input
    std::string sanitizedInput = input;
    sanitizedInput.erase(std::remove(sanitizedInput.begin(), sanitizedInput.end(), '\r'), sanitizedInput.end());
    sanitizedInput.erase(std::remove(sanitizedInput.begin(), sanitizedInput.end(), '\n'), sanitizedInput.end());

    iss.str(sanitizedInput);
    std::string token;

    while (getline(iss, token, ' ')) {
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }

    return tokens;
}
