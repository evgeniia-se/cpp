/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:01:03 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/18 21:19:12 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sys/stat.h>

int is_directory(const std::string& path){
    struct stat s;
    if (stat(path.c_str(), &s) == 0)
    {
        if(S_ISDIR(s.st_mode))
            return (1);
    }
    return 0;
}

std::string my_replace(std::string line, const std::string& s1, const std::string& s2){
    size_t i = 0;
    std::string res = "";
    while ((i = line.find(s1)) != std::string::npos)
    {
        res += line.substr(0, i) + s2;
        line = line.substr(i + s1.length());
    }
    res += line;
    return res;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {    return (1);}
    std::string filename = av[1];
    if (is_directory(filename)){
        std::cerr << "Error: path is directory\n";
        return 1;
    }
	std::string str1 = av[2];
	std::string str2 = av[3];
    if ( str1.empty()){
        std::cerr << "Error: argument is empty" << std::endl; return(1);    }
    std::string replace = ".replace";
    std::string outfile_name = filename + replace;
    // For writing text file
    // Creating ofstream & ifstream class object
    std::ifstream init(filename.c_str()); // This is the original file
    std::ofstream out_file(outfile_name.c_str());

    std::string line;
    if (init && out_file){
        while (getline(init, line)){
            out_file << my_replace(line, str1, str2) << "\n";
        }
        std::cout << "Copy Finished \n";
    }
    else {
        // Something went wrong
        std::cerr << "Error: cannot read or create File" << std::endl;
        /*if (init.is_open()){
            init.close();}
        if (out_file.is_open()){
            out_file.close();}*/
        return (1);
    }
    // Closing file
    init.close();
    out_file.close();

	return 0;
}
