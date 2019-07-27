export async function extract() {
    if (version.settings.modules && version.settings.modules.length > 0) {
        await shell.exec(`.\\dist\\bin\\bcp.exe ${version.settings.modules.join(' ')} ${version.target}`)
    }
}

export async function checkout() {
    await git.checkout(version.hash!)
    
    if (!fs.exists('b2.exe')) {        
        await shell.exec('.\\bootstrap.bat')
    }
    
    if (!fs.exists('dist/bin/bcp.exe')) {       
        await shell.exec('.\\b2.exe -j 12 tools\\bcp')
    }
    
    if (!fs.exists('dist/bin/bcp.exe')) {       
        await shell.exec('.\\b2.exe -j 12 tools\\bcp')
    }
    
    if (!fs.exists('boost')) {       
        await shell.exec('.\\b2.exe headers -j 12')
    }
}
