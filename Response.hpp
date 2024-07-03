/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Response.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnikifor <dnikifor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:08:51 by vshchuki          #+#    #+#             */
/*   Updated: 2024/07/03 19:21:47 by dnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Utility.hpp"
#include <map>
#include <string>
#include <sstream>
#include <iostream>

class Response
{
	private:
		bool		_CGIflag;
		std::string	_body;
		std::string	_status;
		std::string	_type;

	public:
		std::string& getBody();
		std::string& getStatus();
		std::string& getType();
		bool& getCGIflag();
		void setBody(std::string body);
		void setStatus(std::string status);
		void setType(std::string type);
		void setCGIflag(bool CGIflag);
		
		void appendToBody(char* data, std::size_t length);
		std::string buildResponse(Response& response);
};
