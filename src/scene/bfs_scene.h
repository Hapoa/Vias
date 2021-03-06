﻿#ifndef VISUAL_ALGORITHMS_SCENE_BFS_SCENE_H
#define VISUAL_ALGORITHMS_SCENE_BFS_SCENE_H

#include "src/scene/searching_scene.h"
#include "src/object/bfs_object.h"

class BfsScene : public SearchingBaseScene
{
    Q_OBJECT

public:

    BfsScene(SearchingBaseScene* parent = nullptr);

    virtual void start();
    virtual void pause();
    virtual void replay();
    virtual void restore();

};

#endif // VISUAL_ALGORITHMS_SCENE_BFS_SCENE_H
