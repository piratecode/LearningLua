local ListUtils = {}

function ListUtils:Find(list, predicate)
    for i, v in ipairs(list) do
        if predicate(v) then
            return v
        end
    end
    return nil
end

function ListUtils:FindIndex(list, predicate)
    for i, v in ipairs(list) do
        if predicate(v) then
            return i
        end
    end
    return -1
end

function ListUtils:IndexOf(list, item)
    for i, v in ipairs(list) do
        if v == item then
            return i
        end
    end
    return -1
end

function ListUtils:Remove(list, item)
    local index = ListUtils:IndexOf(list, item)
    if index ~= -1 then
        table.remove(list, index)
    end
end


return ListUtils