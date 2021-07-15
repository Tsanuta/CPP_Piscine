/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:36:00 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 14:08:46 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	std::cout << "---- Test with int array       ----" << std::endl;
	std::cout << "Create empty array" << std::endl;
	Array<int>	int_array_empty;
	std::cout << int_array_empty << std::endl;
	std::cout << "size: " << int_array_empty.size() << std::endl;

	std::cout << "Create int array size 10" << std::endl;
	Array<int>	int_array_10(10);
	std::cout << int_array_10 << std::endl;
	std::cout << int_array_10[0] << std::endl;
	std::cout << "size: " << int_array_10.size() << std::endl;

	std::cout << "[] operator" << std::endl;
	int_array_10[0] = 5;
	int_array_10[1] = 10;
	int_array_10[2] = 15;
	int_array_10[3] = 20;
	try {
		int_array_10[11] = 30; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	std::cout << int_array_10 << std::endl;
	std::cout << int_array_10[0] << std::endl;
	try {
		std::cout << int_array_10[11] << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	try {
		std::cout << int_array_10[-1] << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "Copy" << std::endl;
	Array<int> int_array_cpy(int_array_10);

	std::cout << int_array_cpy << std::endl;
	std::cout << "size: " << int_array_cpy.size() << std::endl;

	std::cout << "Equal operator" << std::endl;
	Array<int> int_array_equal;

	int_array_equal = int_array_10;
	std::cout << int_array_equal << std::endl;
	std::cout << "size: " << int_array_equal.size() << std::endl;

	std::cout << "---- Test with float array      ----" << std::endl;
	std::cout << "Create float array size 10" << std::endl;
	Array<float>	float_array_10(10);
	std::cout << float_array_10 << std::endl;
	std::cout << "size: " << float_array_10.size() << std::endl;
	std::cout << float_array_10[0] << std::endl;

	std::cout << "[] operator" << std::endl;
	float_array_10[0] = 5.5f;
	float_array_10[1] = 10.51f;
	float_array_10[2] = 15.5467f;
	float_array_10[3] = 20.24856f;
	try {
		float_array_10[11] = 56.856f; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	std::cout << float_array_10 << std::endl;
	std::cout << float_array_10[0] << std::endl;
	try {
		std::cout << float_array_10[11] << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	try {
		std::cout << float_array_10[-1] << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << "---- Test with string array     ----" << std::endl;
	std::cout << "Create string array size 10" << std::endl;
	Array<std::string>	str_array_10(10);
	std::cout << str_array_10 << std::endl;
	std::cout << "size: " << str_array_10.size() << std::endl;
	std::cout << str_array_10[0] << std::endl;

	std::cout << "[] operator" << std::endl;
	str_array_10[0] = "Bonjour";
	str_array_10[1] = "comment";
	str_array_10[2] = "ca";
	str_array_10[3] = "va?";
	try {
		str_array_10[11] = "Hey"; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	std::cout << str_array_10 << std::endl;
	std::cout << "size: " << str_array_10.size() << std::endl;
	std::cout << str_array_10[0] << std::endl;
	try {
		std::cout << str_array_10[11] << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }
	try {
		std::cout << str_array_10[-1] << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	return 0;
}
