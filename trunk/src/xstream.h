#ifndef XML_STREAM_H
#define XML_STREAM_H
#include <iostream>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xmlreader.h>

class XmlStream
    {
    public:
	XmlStream(std::istream& in);
	virtual ~XmlStream();
	xmlDocPtr next():
    private:
	std::istream* in;
	xmlTextReaderPtr reader;
	xmlDocPtr dom;
	static int _xmlInputReadCallback(
			     void * context,
			     char * buffer,
			     int len);
	static int _xmlInputCloseCallback(void * context);
    };



#endif