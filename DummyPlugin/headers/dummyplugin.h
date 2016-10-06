#ifndef DUMMYPLUGIN_H__
#define DUMMYPLUGIN_H__

#define ID_DUMMY 1038045 

class DummyPlugin : public CommandData
{
public:
	static DummyPlugin* Alloc(){ return NewObjClear(DummyPlugin); }
	virtual Bool Execute(BaseDocument* doc);
};

#endif // DUMMYPLUGIN_H__
