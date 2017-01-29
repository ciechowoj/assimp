/*
Open Asset Import Library (ASSIMP)
----------------------------------------------------------------------

Copyright (c) 2006-2016, ASSIMP Development Team
All rights reserved.

Redistribution and use of this software in source and binary forms,
with or without modification, are permitted provided that the
following conditions are met:

* Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.

* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.

* Neither the name of the ASSIMP team, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission of the ASSIMP Development Team.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------
*/

/** @file  BlenderScene.cpp
 *  @brief MACHINE GENERATED BY ./scripts/BlenderImporter/genblenddna.py
 */

#ifndef ASSIMP_BUILD_NO_BLEND_IMPORTER

#include "BlenderDNA.h"
#include "BlenderScene.h"
#include "BlenderSceneGen.h"

using namespace Assimp;
using namespace Assimp::Blender;

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Object> (
    Object& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadField<ErrorPolicy_Fail>((int&)dest.type,"type",db);
    ReadFieldArray2<ErrorPolicy_Warn>(dest.obmat,"obmat",db);
    ReadFieldArray2<ErrorPolicy_Warn>(dest.parentinv,"parentinv",db);
    ReadFieldArray<ErrorPolicy_Warn>(dest.parsubstr,"parsubstr",db);
    {
        std::shared_ptr<Object> parent;
        ReadFieldPtr<ErrorPolicy_Warn>(parent,"*parent",db);
        dest.parent = parent.get();
    }
    ReadFieldPtr<ErrorPolicy_Warn>(dest.track,"*track",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.proxy,"*proxy",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.proxy_from,"*proxy_from",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.proxy_group,"*proxy_group",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.dup_group,"*dup_group",db);
    ReadFieldPtr<ErrorPolicy_Fail>(dest.data,"*data",db);
    ReadField<ErrorPolicy_Igno>(dest.modifiers,"modifiers",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Group> (
    Group& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadField<ErrorPolicy_Igno>(dest.layer,"layer",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.gobject,"*gobject",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MTex> (
    MTex& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Igno>((short&)dest.mapto,"mapto",db);
    ReadField<ErrorPolicy_Igno>((int&)dest.blendtype,"blendtype",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.object,"*object",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.tex,"*tex",db);
    ReadFieldArray<ErrorPolicy_Igno>(dest.uvname,"uvname",db);
    ReadField<ErrorPolicy_Igno>((int&)dest.projx,"projx",db);
    ReadField<ErrorPolicy_Igno>((int&)dest.projy,"projy",db);
    ReadField<ErrorPolicy_Igno>((int&)dest.projz,"projz",db);
    ReadField<ErrorPolicy_Igno>(dest.mapping,"mapping",db);
    ReadFieldArray<ErrorPolicy_Igno>(dest.ofs,"ofs",db);
    ReadFieldArray<ErrorPolicy_Igno>(dest.size,"size",db);
    ReadField<ErrorPolicy_Igno>(dest.rot,"rot",db);
    ReadField<ErrorPolicy_Igno>(dest.texflag,"texflag",db);
    ReadField<ErrorPolicy_Igno>(dest.colormodel,"colormodel",db);
    ReadField<ErrorPolicy_Igno>(dest.pmapto,"pmapto",db);
    ReadField<ErrorPolicy_Igno>(dest.pmaptoneg,"pmaptoneg",db);
    ReadField<ErrorPolicy_Warn>(dest.r,"r",db);
    ReadField<ErrorPolicy_Warn>(dest.g,"g",db);
    ReadField<ErrorPolicy_Warn>(dest.b,"b",db);
    ReadField<ErrorPolicy_Warn>(dest.k,"k",db);
    ReadField<ErrorPolicy_Igno>(dest.colspecfac,"colspecfac",db);
    ReadField<ErrorPolicy_Igno>(dest.mirrfac,"mirrfac",db);
    ReadField<ErrorPolicy_Igno>(dest.alphafac,"alphafac",db);
    ReadField<ErrorPolicy_Igno>(dest.difffac,"difffac",db);
    ReadField<ErrorPolicy_Igno>(dest.specfac,"specfac",db);
    ReadField<ErrorPolicy_Igno>(dest.emitfac,"emitfac",db);
    ReadField<ErrorPolicy_Igno>(dest.hardfac,"hardfac",db);
    ReadField<ErrorPolicy_Igno>(dest.norfac,"norfac",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<TFace> (
    TFace& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldArray2<ErrorPolicy_Fail>(dest.uv,"uv",db);
    ReadFieldArray<ErrorPolicy_Fail>(dest.col,"col",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);
    ReadField<ErrorPolicy_Igno>(dest.mode,"mode",db);
    ReadField<ErrorPolicy_Igno>(dest.tile,"tile",db);
    ReadField<ErrorPolicy_Igno>(dest.unwrap,"unwrap",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<SubsurfModifierData> (
    SubsurfModifierData& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.modifier,"modifier",db);
    ReadField<ErrorPolicy_Warn>(dest.subdivType,"subdivType",db);
    ReadField<ErrorPolicy_Fail>(dest.levels,"levels",db);
    ReadField<ErrorPolicy_Igno>(dest.renderLevels,"renderLevels",db);
    ReadField<ErrorPolicy_Igno>(dest.flags,"flags",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MFace> (
    MFace& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.v1,"v1",db);
    ReadField<ErrorPolicy_Fail>(dest.v2,"v2",db);
    ReadField<ErrorPolicy_Fail>(dest.v3,"v3",db);
    ReadField<ErrorPolicy_Fail>(dest.v4,"v4",db);
    ReadField<ErrorPolicy_Fail>(dest.mat_nr,"mat_nr",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Lamp> (
    Lamp& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadField<ErrorPolicy_Fail>((int&)dest.type,"type",db);
    ReadField<ErrorPolicy_Igno>(dest.mode,"mode",db);
    ReadField<ErrorPolicy_Igno>(dest.flags,"flags",db);
    ReadField<ErrorPolicy_Igno>(dest.colormodel,"colormodel",db);
    ReadField<ErrorPolicy_Igno>(dest.totex,"totex",db);
    ReadField<ErrorPolicy_Warn>(dest.r,"r",db);
    ReadField<ErrorPolicy_Warn>(dest.g,"g",db);
    ReadField<ErrorPolicy_Warn>(dest.b,"b",db);
    ReadField<ErrorPolicy_Warn>(dest.k,"k",db);
    ReadField<ErrorPolicy_Igno>(dest.energy,"energy",db);
    ReadField<ErrorPolicy_Igno>(dest.dist,"dist",db);
    ReadField<ErrorPolicy_Igno>(dest.spotsize,"spotsize",db);
    ReadField<ErrorPolicy_Igno>(dest.spotblend,"spotblend",db);
    ReadField<ErrorPolicy_Igno>(dest.att1,"att1",db);
    ReadField<ErrorPolicy_Igno>(dest.att2,"att2",db);
    ReadField<ErrorPolicy_Igno>((int&)dest.falloff_type,"falloff_type",db);
    ReadField<ErrorPolicy_Igno>(dest.sun_brightness,"sun_brightness",db);
    ReadField<ErrorPolicy_Igno>(dest.area_size,"area_size",db);
    ReadField<ErrorPolicy_Igno>(dest.area_sizey,"area_sizey",db);
    ReadField<ErrorPolicy_Igno>(dest.area_sizez,"area_sizez",db);
    ReadField<ErrorPolicy_Igno>(dest.area_shape,"area_shape",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MDeformWeight> (
    MDeformWeight& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.def_nr,"def_nr",db);
    ReadField<ErrorPolicy_Fail>(dest.weight,"weight",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<PackedFile> (
    PackedFile& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Warn>(dest.size,"size",db);
    ReadField<ErrorPolicy_Warn>(dest.seek,"seek",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.data,"*data",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Base> (
    Base& dest,
    const FileDatabase& db
    ) const
{
    // note: as per https://github.com/assimp/assimp/issues/128,
    // reading the Object linked list recursively is prone to stack overflow.
    // This structure converter is therefore an hand-written exception that
    // does it iteratively.

    const int initial_pos = db.reader->GetCurrentPos();

    std::pair<Base*, int> todo = std::make_pair(&dest, initial_pos);
    for ( ;; ) {

        Base& cur_dest = *todo.first;
        db.reader->SetCurrentPos(todo.second);

        // we know that this is a double-linked, circular list which we never
        // traverse backwards, so don't bother resolving the back links.
        cur_dest.prev = NULL;

        ReadFieldPtr<ErrorPolicy_Warn>(cur_dest.object,"*object",db);

        // the return value of ReadFieldPtr indicates whether the object
        // was already cached. In this case, we don't need to resolve
        // it again.
        if(!ReadFieldPtr<ErrorPolicy_Warn>(cur_dest.next,"*next",db, true) && cur_dest.next) {
            todo = std::make_pair(&*cur_dest.next, db.reader->GetCurrentPos());
            continue;
        }
        break;
    }

    db.reader->SetCurrentPos(initial_pos + size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MTFace> (
    MTFace& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldArray2<ErrorPolicy_Fail>(dest.uv,"uv",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);
    ReadField<ErrorPolicy_Igno>(dest.mode,"mode",db);
    ReadField<ErrorPolicy_Igno>(dest.tile,"tile",db);
    ReadField<ErrorPolicy_Igno>(dest.unwrap,"unwrap",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Material> (
    Material& dest,
    const FileDatabase& db
    ) const
{
    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadField<ErrorPolicy_Warn>(dest.r,"r",db);
    ReadField<ErrorPolicy_Warn>(dest.g,"g",db);
    ReadField<ErrorPolicy_Warn>(dest.b,"b",db);
    ReadField<ErrorPolicy_Warn>(dest.specr,"specr",db);
    ReadField<ErrorPolicy_Warn>(dest.specg,"specg",db);
    ReadField<ErrorPolicy_Warn>(dest.specb,"specb",db);
    ReadField<ErrorPolicy_Igno>(dest.har,"har",db);
    ReadField<ErrorPolicy_Warn>(dest.ambr,"ambr",db);
    ReadField<ErrorPolicy_Warn>(dest.ambg,"ambg",db);
    ReadField<ErrorPolicy_Warn>(dest.ambb,"ambb",db);
    ReadField<ErrorPolicy_Igno>(dest.mirr,"mirr",db);
    ReadField<ErrorPolicy_Igno>(dest.mirg,"mirg",db);
    ReadField<ErrorPolicy_Igno>(dest.mirb,"mirb",db);
    ReadField<ErrorPolicy_Warn>(dest.emit,"emit",db);
    ReadField<ErrorPolicy_Igno>(dest.ray_mirror,"ray_mirror",db);
    ReadField<ErrorPolicy_Warn>(dest.alpha,"alpha",db);
    ReadField<ErrorPolicy_Igno>(dest.ref,"ref",db);
    ReadField<ErrorPolicy_Igno>(dest.translucency,"translucency",db);
    ReadField<ErrorPolicy_Igno>(dest.mode,"mode",db);
    ReadField<ErrorPolicy_Igno>(dest.roughness,"roughness",db);
    ReadField<ErrorPolicy_Igno>(dest.darkness,"darkness",db);
    ReadField<ErrorPolicy_Igno>(dest.refrac,"refrac",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.group,"*group",db);
    ReadField<ErrorPolicy_Warn>(dest.diff_shader,"diff_shader",db);
    ReadField<ErrorPolicy_Warn>(dest.spec_shader,"spec_shader",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mtex,"*mtex",db);


    ReadField<ErrorPolicy_Igno>(dest.amb, "amb", db);
    ReadField<ErrorPolicy_Igno>(dest.ang, "ang", db);
    ReadField<ErrorPolicy_Igno>(dest.spectra, "spectra", db);
    ReadField<ErrorPolicy_Igno>(dest.spec, "spec", db);
    ReadField<ErrorPolicy_Igno>(dest.zoffs, "zoffs", db);
    ReadField<ErrorPolicy_Igno>(dest.add, "add", db);
    ReadField<ErrorPolicy_Igno>(dest.fresnel_mir, "fresnel_mir", db);
    ReadField<ErrorPolicy_Igno>(dest.fresnel_mir_i, "fresnel_mir_i", db);
    ReadField<ErrorPolicy_Igno>(dest.fresnel_tra, "fresnel_tra", db);
    ReadField<ErrorPolicy_Igno>(dest.fresnel_tra_i, "fresnel_tra_i", db);
    ReadField<ErrorPolicy_Igno>(dest.filter, "filter", db);
    ReadField<ErrorPolicy_Igno>(dest.tx_limit, "tx_limit", db);
    ReadField<ErrorPolicy_Igno>(dest.tx_falloff, "tx_falloff", db);
    ReadField<ErrorPolicy_Igno>(dest.gloss_mir, "gloss_mir", db);
    ReadField<ErrorPolicy_Igno>(dest.gloss_tra, "gloss_tra", db);
    ReadField<ErrorPolicy_Igno>(dest.adapt_thresh_mir, "adapt_thresh_mir", db);
    ReadField<ErrorPolicy_Igno>(dest.adapt_thresh_tra, "adapt_thresh_tra", db);
    ReadField<ErrorPolicy_Igno>(dest.aniso_gloss_mir, "aniso_gloss_mir", db);
    ReadField<ErrorPolicy_Igno>(dest.dist_mir, "dist_mir", db);
    ReadField<ErrorPolicy_Igno>(dest.hasize, "hasize", db);
    ReadField<ErrorPolicy_Igno>(dest.flaresize, "flaresize", db);
    ReadField<ErrorPolicy_Igno>(dest.subsize, "subsize", db);
    ReadField<ErrorPolicy_Igno>(dest.flareboost, "flareboost", db);
    ReadField<ErrorPolicy_Igno>(dest.strand_sta, "strand_sta", db);
    ReadField<ErrorPolicy_Igno>(dest.strand_end, "strand_end", db);
    ReadField<ErrorPolicy_Igno>(dest.strand_ease, "strand_ease", db);
    ReadField<ErrorPolicy_Igno>(dest.strand_surfnor, "strand_surfnor", db);
    ReadField<ErrorPolicy_Igno>(dest.strand_min, "strand_min", db);
    ReadField<ErrorPolicy_Igno>(dest.strand_widthfade, "strand_widthfade", db);
    ReadField<ErrorPolicy_Igno>(dest.sbias, "sbias", db);
    ReadField<ErrorPolicy_Igno>(dest.lbias, "lbias", db);
    ReadField<ErrorPolicy_Igno>(dest.shad_alpha, "shad_alpha", db);
    ReadField<ErrorPolicy_Igno>(dest.param, "param", db);
    ReadField<ErrorPolicy_Igno>(dest.rms, "rms", db);
    ReadField<ErrorPolicy_Igno>(dest.rampfac_col, "rampfac_col", db);
    ReadField<ErrorPolicy_Igno>(dest.rampfac_spec, "rampfac_spec", db);
    ReadField<ErrorPolicy_Igno>(dest.friction, "friction", db);
    ReadField<ErrorPolicy_Igno>(dest.fh, "fh", db);
    ReadField<ErrorPolicy_Igno>(dest.reflect, "reflect", db);
    ReadField<ErrorPolicy_Igno>(dest.fhdist, "fhdist", db);
    ReadField<ErrorPolicy_Igno>(dest.xyfrict, "xyfrict", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_radius, "sss_radius", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_col, "sss_col", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_error, "sss_error", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_scale, "sss_scale", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_ior, "sss_ior", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_colfac, "sss_colfac", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_texfac, "sss_texfac", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_front, "sss_front", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_back, "sss_back", db);

    ReadField<ErrorPolicy_Igno>(dest.material_type, "material_type", db);
    ReadField<ErrorPolicy_Igno>(dest.flag, "flag", db);
    ReadField<ErrorPolicy_Igno>(dest.ray_depth, "ray_depth", db);
    ReadField<ErrorPolicy_Igno>(dest.ray_depth_tra, "ray_depth_tra", db);
    ReadField<ErrorPolicy_Igno>(dest.samp_gloss_mir, "samp_gloss_mir", db);
    ReadField<ErrorPolicy_Igno>(dest.samp_gloss_tra, "samp_gloss_tra", db);
    ReadField<ErrorPolicy_Igno>(dest.fadeto_mir, "fadeto_mir", db);
    ReadField<ErrorPolicy_Igno>(dest.shade_flag, "shade_flag", db);
    ReadField<ErrorPolicy_Igno>(dest.flarec, "flarec", db);
    ReadField<ErrorPolicy_Igno>(dest.starc, "starc", db);
    ReadField<ErrorPolicy_Igno>(dest.linec, "linec", db);
    ReadField<ErrorPolicy_Igno>(dest.ringc, "ringc", db);
    ReadField<ErrorPolicy_Igno>(dest.pr_lamp, "pr_lamp", db);
    ReadField<ErrorPolicy_Igno>(dest.pr_texture, "pr_texture", db);
    ReadField<ErrorPolicy_Igno>(dest.ml_flag, "ml_flag", db);
    ReadField<ErrorPolicy_Igno>(dest.diff_shader, "diff_shader", db);
    ReadField<ErrorPolicy_Igno>(dest.spec_shader, "spec_shader", db);
    ReadField<ErrorPolicy_Igno>(dest.texco, "texco", db);
    ReadField<ErrorPolicy_Igno>(dest.mapto, "mapto", db);
    ReadField<ErrorPolicy_Igno>(dest.ramp_show, "ramp_show", db);
    ReadField<ErrorPolicy_Igno>(dest.pad3, "pad3", db);
    ReadField<ErrorPolicy_Igno>(dest.dynamode, "dynamode", db);
    ReadField<ErrorPolicy_Igno>(dest.pad2, "pad2", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_flag, "sss_flag", db);
    ReadField<ErrorPolicy_Igno>(dest.sss_preset, "sss_preset", db);
    ReadField<ErrorPolicy_Igno>(dest.shadowonly_flag, "shadowonly_flag", db);
    ReadField<ErrorPolicy_Igno>(dest.index, "index", db);
    ReadField<ErrorPolicy_Igno>(dest.vcol_alpha, "vcol_alpha", db);
    ReadField<ErrorPolicy_Igno>(dest.pad4, "pad4", db);

    ReadField<ErrorPolicy_Igno>(dest.seed1, "seed1", db);
    ReadField<ErrorPolicy_Igno>(dest.seed2, "seed2", db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MTexPoly> (
    MTexPoly& dest,
    const FileDatabase& db
    ) const
{

    {
        std::shared_ptr<Image> tpage;
        ReadFieldPtr<ErrorPolicy_Igno>(tpage,"*tpage",db);
        dest.tpage = tpage.get();
    }
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);
    ReadField<ErrorPolicy_Igno>(dest.transp,"transp",db);
    ReadField<ErrorPolicy_Igno>(dest.mode,"mode",db);
    ReadField<ErrorPolicy_Igno>(dest.tile,"tile",db);
    ReadField<ErrorPolicy_Igno>(dest.pad,"pad",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Mesh> (
    Mesh& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadField<ErrorPolicy_Fail>(dest.totface,"totface",db);
    ReadField<ErrorPolicy_Fail>(dest.totedge,"totedge",db);
    ReadField<ErrorPolicy_Fail>(dest.totvert,"totvert",db);
    ReadField<ErrorPolicy_Igno>(dest.totloop,"totloop",db);
    ReadField<ErrorPolicy_Igno>(dest.totpoly,"totpoly",db);
    ReadField<ErrorPolicy_Igno>(dest.subdiv,"subdiv",db);
    ReadField<ErrorPolicy_Igno>(dest.subdivr,"subdivr",db);
    ReadField<ErrorPolicy_Igno>(dest.subsurftype,"subsurftype",db);
    ReadField<ErrorPolicy_Igno>(dest.smoothresh,"smoothresh",db);
    ReadFieldPtr<ErrorPolicy_Fail>(dest.mface,"*mface",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mtface,"*mtface",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.tface,"*tface",db);
    ReadFieldPtr<ErrorPolicy_Fail>(dest.mvert,"*mvert",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.medge,"*medge",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mloop,"*mloop",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mloopuv,"*mloopuv",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mloopcol,"*mloopcol",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mpoly,"*mpoly",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mtpoly,"*mtpoly",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.dvert,"*dvert",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mcol,"*mcol",db);
    ReadFieldPtr<ErrorPolicy_Fail>(dest.mat,"**mat",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MDeformVert> (
    MDeformVert& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldPtr<ErrorPolicy_Warn>(dest.dw,"*dw",db);
    ReadField<ErrorPolicy_Igno>(dest.totweight,"totweight",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<World> (
    World& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MLoopCol> (
    MLoopCol& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Igno>(dest.r,"r",db);
    ReadField<ErrorPolicy_Igno>(dest.g,"g",db);
    ReadField<ErrorPolicy_Igno>(dest.b,"b",db);
    ReadField<ErrorPolicy_Igno>(dest.a,"a",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MVert> (
    MVert& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldArray<ErrorPolicy_Fail>(dest.co,"co",db);
    ReadFieldArray<ErrorPolicy_Fail>(dest.no,"no",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);
    ReadField<ErrorPolicy_Warn>(dest.mat_nr,"mat_nr",db);
    ReadField<ErrorPolicy_Igno>(dest.bweight,"bweight",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MEdge> (
    MEdge& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.v1,"v1",db);
    ReadField<ErrorPolicy_Fail>(dest.v2,"v2",db);
    ReadField<ErrorPolicy_Igno>(dest.crease,"crease",db);
    ReadField<ErrorPolicy_Igno>(dest.bweight,"bweight",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MLoopUV> (
    MLoopUV& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldArray<ErrorPolicy_Igno>(dest.uv,"uv",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<GroupObject> (
    GroupObject& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldPtr<ErrorPolicy_Fail>(dest.prev,"*prev",db);
    ReadFieldPtr<ErrorPolicy_Fail>(dest.next,"*next",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.ob,"*ob",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<ListBase> (
    ListBase& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldPtr<ErrorPolicy_Igno>(dest.first,"*first",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.last,"*last",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MLoop> (
    MLoop& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Igno>(dest.v,"v",db);
    ReadField<ErrorPolicy_Igno>(dest.e,"e",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<ModifierData> (
    ModifierData& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldPtr<ErrorPolicy_Warn>(dest.next,"*next",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.prev,"*prev",db);
    ReadField<ErrorPolicy_Igno>(dest.type,"type",db);
    ReadField<ErrorPolicy_Igno>(dest.mode,"mode",db);
    ReadFieldArray<ErrorPolicy_Igno>(dest.name,"name",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<ID> (
    ID& dest,
    const FileDatabase& db
    ) const
{

    ReadFieldArray<ErrorPolicy_Warn>(dest.name,"name",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MCol> (
    MCol& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.r,"r",db);
    ReadField<ErrorPolicy_Fail>(dest.g,"g",db);
    ReadField<ErrorPolicy_Fail>(dest.b,"b",db);
    ReadField<ErrorPolicy_Fail>(dest.a,"a",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MPoly> (
    MPoly& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Igno>(dest.loopstart,"loopstart",db);
    ReadField<ErrorPolicy_Igno>(dest.totloop,"totloop",db);
    ReadField<ErrorPolicy_Igno>(dest.mat_nr,"mat_nr",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Scene> (
    Scene& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.camera,"*camera",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.world,"*world",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.basact,"*basact",db);
    ReadField<ErrorPolicy_Igno>(dest.base,"base",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Library> (
    Library& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadFieldArray<ErrorPolicy_Warn>(dest.name,"name",db);
    ReadFieldArray<ErrorPolicy_Fail>(dest.filename,"filename",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.parent,"*parent",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Tex> (
    Tex& dest,
    const FileDatabase& db
    ) const
{
    ReadField<ErrorPolicy_Igno>((short&)dest.imaflag,"imaflag",db);
    ReadField<ErrorPolicy_Fail>((int&)dest.type,"type",db);
    ReadFieldPtr<ErrorPolicy_Warn>(dest.ima,"*ima",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Camera> (
    Camera& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadField<ErrorPolicy_Warn>((int&)dest.type,"type",db);
    ReadField<ErrorPolicy_Warn>((int&)dest.flag,"flag",db);
    ReadField<ErrorPolicy_Warn>(dest.lens,"lens",db);
    ReadField<ErrorPolicy_Warn>(dest.sensor_x,"sensor_x",db);
    ReadField<ErrorPolicy_Igno>(dest.clipsta,"clipsta",db);
    ReadField<ErrorPolicy_Igno>(dest.clipend,"clipend",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<MirrorModifierData> (
    MirrorModifierData& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.modifier,"modifier",db);
    ReadField<ErrorPolicy_Igno>(dest.axis,"axis",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);
    ReadField<ErrorPolicy_Igno>(dest.tolerance,"tolerance",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.mirror_ob,"*mirror_ob",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
template <> void Structure :: Convert<Image> (
    Image& dest,
    const FileDatabase& db
    ) const
{

    ReadField<ErrorPolicy_Fail>(dest.id,"id",db);
    ReadFieldArray<ErrorPolicy_Warn>(dest.name,"name",db);
    ReadField<ErrorPolicy_Igno>(dest.ok,"ok",db);
    ReadField<ErrorPolicy_Igno>(dest.flag,"flag",db);
    ReadField<ErrorPolicy_Igno>(dest.source,"source",db);
    ReadField<ErrorPolicy_Igno>(dest.type,"type",db);
    ReadField<ErrorPolicy_Igno>(dest.pad,"pad",db);
    ReadField<ErrorPolicy_Igno>(dest.pad1,"pad1",db);
    ReadField<ErrorPolicy_Igno>(dest.lastframe,"lastframe",db);
    ReadField<ErrorPolicy_Igno>(dest.tpageflag,"tpageflag",db);
    ReadField<ErrorPolicy_Igno>(dest.totbind,"totbind",db);
    ReadField<ErrorPolicy_Igno>(dest.xrep,"xrep",db);
    ReadField<ErrorPolicy_Igno>(dest.yrep,"yrep",db);
    ReadField<ErrorPolicy_Igno>(dest.twsta,"twsta",db);
    ReadField<ErrorPolicy_Igno>(dest.twend,"twend",db);
    ReadFieldPtr<ErrorPolicy_Igno>(dest.packedfile,"*packedfile",db);
    ReadField<ErrorPolicy_Igno>(dest.lastupdate,"lastupdate",db);
    ReadField<ErrorPolicy_Igno>(dest.lastused,"lastused",db);
    ReadField<ErrorPolicy_Igno>(dest.animspeed,"animspeed",db);
    ReadField<ErrorPolicy_Igno>(dest.gen_x,"gen_x",db);
    ReadField<ErrorPolicy_Igno>(dest.gen_y,"gen_y",db);
    ReadField<ErrorPolicy_Igno>(dest.gen_type,"gen_type",db);

    db.reader->IncPtr(size);
}

//--------------------------------------------------------------------------------
void DNA::RegisterConverters() {

    converters["Object"] = DNA::FactoryPair( &Structure::Allocate<Object>, &Structure::Convert<Object> );
    converters["Group"] = DNA::FactoryPair( &Structure::Allocate<Group>, &Structure::Convert<Group> );
    converters["MTex"] = DNA::FactoryPair( &Structure::Allocate<MTex>, &Structure::Convert<MTex> );
    converters["TFace"] = DNA::FactoryPair( &Structure::Allocate<TFace>, &Structure::Convert<TFace> );
    converters["SubsurfModifierData"] = DNA::FactoryPair( &Structure::Allocate<SubsurfModifierData>, &Structure::Convert<SubsurfModifierData> );
    converters["MFace"] = DNA::FactoryPair( &Structure::Allocate<MFace>, &Structure::Convert<MFace> );
    converters["Lamp"] = DNA::FactoryPair( &Structure::Allocate<Lamp>, &Structure::Convert<Lamp> );
    converters["MDeformWeight"] = DNA::FactoryPair( &Structure::Allocate<MDeformWeight>, &Structure::Convert<MDeformWeight> );
    converters["PackedFile"] = DNA::FactoryPair( &Structure::Allocate<PackedFile>, &Structure::Convert<PackedFile> );
    converters["Base"] = DNA::FactoryPair( &Structure::Allocate<Base>, &Structure::Convert<Base> );
    converters["MTFace"] = DNA::FactoryPair( &Structure::Allocate<MTFace>, &Structure::Convert<MTFace> );
    converters["Material"] = DNA::FactoryPair( &Structure::Allocate<Material>, &Structure::Convert<Material> );
    converters["MTexPoly"] = DNA::FactoryPair( &Structure::Allocate<MTexPoly>, &Structure::Convert<MTexPoly> );
    converters["Mesh"] = DNA::FactoryPair( &Structure::Allocate<Mesh>, &Structure::Convert<Mesh> );
    converters["MDeformVert"] = DNA::FactoryPair( &Structure::Allocate<MDeformVert>, &Structure::Convert<MDeformVert> );
    converters["World"] = DNA::FactoryPair( &Structure::Allocate<World>, &Structure::Convert<World> );
    converters["MLoopCol"] = DNA::FactoryPair( &Structure::Allocate<MLoopCol>, &Structure::Convert<MLoopCol> );
    converters["MVert"] = DNA::FactoryPair( &Structure::Allocate<MVert>, &Structure::Convert<MVert> );
    converters["MEdge"] = DNA::FactoryPair( &Structure::Allocate<MEdge>, &Structure::Convert<MEdge> );
    converters["MLoopUV"] = DNA::FactoryPair( &Structure::Allocate<MLoopUV>, &Structure::Convert<MLoopUV> );
    converters["GroupObject"] = DNA::FactoryPair( &Structure::Allocate<GroupObject>, &Structure::Convert<GroupObject> );
    converters["ListBase"] = DNA::FactoryPair( &Structure::Allocate<ListBase>, &Structure::Convert<ListBase> );
    converters["MLoop"] = DNA::FactoryPair( &Structure::Allocate<MLoop>, &Structure::Convert<MLoop> );
    converters["ModifierData"] = DNA::FactoryPair( &Structure::Allocate<ModifierData>, &Structure::Convert<ModifierData> );
    converters["ID"] = DNA::FactoryPair( &Structure::Allocate<ID>, &Structure::Convert<ID> );
    converters["MCol"] = DNA::FactoryPair( &Structure::Allocate<MCol>, &Structure::Convert<MCol> );
    converters["MPoly"] = DNA::FactoryPair( &Structure::Allocate<MPoly>, &Structure::Convert<MPoly> );
    converters["Scene"] = DNA::FactoryPair( &Structure::Allocate<Scene>, &Structure::Convert<Scene> );
    converters["Library"] = DNA::FactoryPair( &Structure::Allocate<Library>, &Structure::Convert<Library> );
    converters["Tex"] = DNA::FactoryPair( &Structure::Allocate<Tex>, &Structure::Convert<Tex> );
    converters["Camera"] = DNA::FactoryPair( &Structure::Allocate<Camera>, &Structure::Convert<Camera> );
    converters["MirrorModifierData"] = DNA::FactoryPair( &Structure::Allocate<MirrorModifierData>, &Structure::Convert<MirrorModifierData> );
    converters["Image"] = DNA::FactoryPair( &Structure::Allocate<Image>, &Structure::Convert<Image> );
}


#endif
