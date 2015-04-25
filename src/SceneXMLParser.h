#ifndef __SCENE_XML_PARSER_H__
#define __SCENE_XML_PARSER_H__

#include <iostream>
#include <fstream>
#include "rapidxml.hpp"

#include <openglframework.h>
#include "Simulation.h"

class SceneXMLParser {

public:
    void loadSimulation(const std::string& file_name,
                        bool rendering_enabled,
                        openglframework::GLFWViewer* viewer,
                        Simulation** sim,
                        scalar& dt,
                        scalar& max_time,
                        scalar& steps_per_sec_cap,
                        openglframework::Color& bgcolor,
                        std::string& description);

    void loadMaxTime(rapidxml::xml_node<>* node, scalar& max_t);
    void loadMaxSimFrequency( rapidxml::xml_node<>* node, scalar& max_freq );

    void loadBackgroundColor( rapidxml::xml_node<>* node, openglframework::Color& color );
    void loadSceneDescriptionString( rapidxml::xml_node<>* node, std::string& description_string );

    void loadViewport(rapidxml::xml_node<> *node, openglframework::GLFWViewer* viewer);
    void loadCamera(rapidxml::xml_node<> *node, openglframework::GLFWViewer* viewer);

    void loadFluids(rapidxml::xml_node<>* node, Scene& scene);

    void loadXMLFile( const std::string& filename, std::vector<char>& xmlchars, rapidxml::xml_document<>& doc );
    bool loadTextFileIntoString( const std::string& filename, std::string& filecontents );
};

#endif