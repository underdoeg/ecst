// Copyright (c) 2015-2016 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0
// http://vittorioromeo.info | vittorio.romeo@outlook.com

#pragma once

#include "./handle.hpp"
#include "../constants.hpp"

ECST_CONTEXT_ENTITY_NAMESPACE
{
    namespace impl
    {
        handle::handle() noexcept : _id{invalid_id}
        {
        }

        handle::handle(uninitialized_handle_init) noexcept
        {
        }

        handle::handle(entity_id id, counter ctr) noexcept : _id{id}, _ctr{ctr}
        {
        }
    }
}
ECST_CONTEXT_ENTITY_NAMESPACE_END
