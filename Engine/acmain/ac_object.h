
#include "ac/dynobj/scriptobject.h"
#include "ac/ac_move.h"
#include "acrun/ac_rundefines.h" //AGS_INLINE

AGS_INLINE int is_valid_object(int obtest);
void SetObjectTint(int obj, int red, int green, int blue, int opacity, int luminance);
void Object_Tint(ScriptObject *objj, int red, int green, int blue, int saturation, int luminance);
void RemoveObjectTint(int obj);
void Object_RemoveTint(ScriptObject *objj);
void SetObjectView(int obn,int vii);
void SetObjectFrame(int obn,int viw,int lop,int fra);
void Object_SetView(ScriptObject *objj, int view, int loop, int frame);
// pass trans=0 for fully solid, trans=100 for fully transparent
void SetObjectTransparency(int obn,int trans);
void Object_SetTransparency(ScriptObject *objj, int trans);
int Object_GetTransparency(ScriptObject *objj);
void SetObjectBaseline (int obn, int basel);
void Object_SetBaseline(ScriptObject *objj, int basel);
int GetObjectBaseline(int obn);
int Object_GetBaseline(ScriptObject *objj);
void AnimateObjectEx(int obn,int loopn,int spdd,int rept, int direction, int blocking);
void Object_Animate(ScriptObject *objj, int loop, int delay, int repeat, int blocking, int direction);
void Object_StopAnimating(ScriptObject *objj);
void AnimateObject(int obn,int loopn,int spdd,int rept);
void MergeObject(int obn);
void Object_MergeIntoBackground(ScriptObject *objj);
void StopObjectMoving(int objj);
void Object_StopMoving(ScriptObject *objj);
void ObjectOff(int obn);
void ObjectOn(int obn);
void Object_SetVisible(ScriptObject *objj, int onoroff);
int IsObjectOn (int objj);
int Object_GetView(ScriptObject *objj);
int Object_GetLoop(ScriptObject *objj);
int Object_GetFrame(ScriptObject *objj);
int Object_GetVisible(ScriptObject *objj);
void SetObjectGraphic(int obn,int slott);
void Object_SetGraphic(ScriptObject *objj, int slott);
int GetObjectGraphic(int obn);
int Object_GetGraphic(ScriptObject *objj);
int GetObjectX (int objj);
int Object_GetX(ScriptObject *objj);
int GetObjectY (int objj);
int Object_GetY(ScriptObject *objj);
int IsObjectAnimating(int objj);
int Object_GetAnimating(ScriptObject *objj);
int IsObjectMoving(int objj);
int Object_GetMoving(ScriptObject *objj);
void SetObjectPosition(int objj, int tox, int toy);
void Object_SetPosition(ScriptObject *objj, int xx, int yy);
void Object_SetX(ScriptObject *objj, int xx);
void Object_SetY(ScriptObject *objj, int yy);
void convert_move_path_to_high_res(MoveList *ml);
void move_object(int objj,int tox,int toy,int spee,int ignwal);
void GetObjectName(int obj, char *buffer);
void Object_GetName(ScriptObject *objj, char *buffer);
const char* Object_GetName_New(ScriptObject *objj);
void MoveObject(int objj,int xx,int yy,int spp);
void MoveObjectDirect(int objj,int xx,int yy,int spp);
void Object_Move(ScriptObject *objj, int x, int y, int speed, int blocking, int direct);
void SetObjectClickable (int cha, int clik);
void Object_SetClickable(ScriptObject *objj, int clik);
int Object_GetClickable(ScriptObject *objj);
void Object_SetIgnoreScaling(ScriptObject *objj, int newval);
int Object_GetIgnoreScaling(ScriptObject *objj);
void Object_SetSolid(ScriptObject *objj, int solid);
int Object_GetSolid(ScriptObject *objj);
void Object_SetBlockingWidth(ScriptObject *objj, int bwid);
int Object_GetBlockingWidth(ScriptObject *objj);
void Object_SetBlockingHeight(ScriptObject *objj, int bhit);
int Object_GetBlockingHeight(ScriptObject *objj);
void SetObjectIgnoreWalkbehinds (int cha, int clik);
int Object_GetID(ScriptObject *objj);
void Object_SetIgnoreWalkbehinds(ScriptObject *chaa, int clik);
int Object_GetIgnoreWalkbehinds(ScriptObject *chaa);
